@class NSArray, NSString, NSDictionary, NSError;

@interface NPTPingResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *pings;
@property double minLatency;
@property double maxLatency;
@property double meanLatency;
@property double standardDeviation;
@property double percentLost;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) NSDictionary *asDictionary;

- (void)encodeWithCoder:(id)a0;
- (double)calculateStandardDeviation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)populateFields;
- (id)init;
- (id)initWithPings:(id)a0 usingAddress:(id)a1;
- (void).cxx_destruct;

@end
