@class NSString;

@interface TSCEQuotedRefPathWord : NSObject

@property (nonatomic) BOOL wasQuoted;
@property (nonatomic) BOOL hasPreserveFlag;
@property (retain, nonatomic) NSString *rawString;

- (void).cxx_destruct;
- (id)description;
- (id)trimmedString;
- (id)trimmedStringWithPreserveFlag:(BOOL)a0;
- (id)initWithRawString:(id)a0;
- (id)quoteStringIfNeeded;

@end
