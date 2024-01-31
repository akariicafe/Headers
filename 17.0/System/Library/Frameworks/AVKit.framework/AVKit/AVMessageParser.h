@class NSString, NSData;

@interface AVMessageParser : NSObject

@property (class, readonly, nonatomic) AVMessageParser *airMessageParser;

@property (copy, nonatomic) NSString *lineSeparator;
@property (copy, nonatomic) NSString *headerBodySeparator;
@property (copy, nonatomic) NSString *bodyLengthKey;
@property (copy, nonatomic) NSString *compressionMethodKey;
@property (retain, nonatomic) NSData *lineSeparatorData;
@property (retain, nonatomic) NSData *headerBodySeparatorData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLineSeparator:(id)a0 headerBodySeparator:(id)a1 bodyLengthKey:(id)a2 compressionMethodKey:(id)a3;
- (id)partsWithData:(id)a0;

@end
