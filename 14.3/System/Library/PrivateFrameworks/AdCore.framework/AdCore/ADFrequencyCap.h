@class NSString;

@interface ADFrequencyCap : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *adMetadata;
@property (nonatomic) long long downloadType;
@property (nonatomic) double setTime;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (id)splitCapData:(id)a0;

@end
