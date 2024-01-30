@class NSString;

@interface TSCEQuotedRefPathWord : NSObject

@property (nonatomic) BOOL wasQuoted;
@property (nonatomic) BOOL hasPreserveFlag;
@property (retain, nonatomic) NSString *rawString;

- (id)trimmedString;
- (id)description;
- (void).cxx_destruct;
- (id)trimmedStringWithPreserveFlag:(BOOL)a0;
- (id)initWithRawString:(id)a0;
- (id)quoteStringIfNeeded;

@end
