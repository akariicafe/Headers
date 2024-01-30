@interface NviSignalData : NSObject <NSCoding>

@property (nonatomic) unsigned long long sigType;
@property (nonatomic) unsigned long long sigGenTs;

+ (id)headerString;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithSignalType:(unsigned long long)a0 timestamp:(unsigned long long)a1;
- (id)stringForLogging;

@end
