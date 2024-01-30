@class NSString, NSDate;

@interface MCSignpost : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *process;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *feature;
@property (readonly, copy, nonatomic) NSDate *timestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithProcess:(id)a0 type:(unsigned long long)a1 feature:(id)a2 timestamp:(id)a3;

@end
