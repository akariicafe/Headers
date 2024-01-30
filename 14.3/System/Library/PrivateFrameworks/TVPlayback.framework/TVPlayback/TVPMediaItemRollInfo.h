@class NSNumber;

@interface TVPMediaItemRollInfo : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) double start;
@property (readonly, nonatomic) double duration;
@property (retain, nonatomic) NSNumber *adamID;
@property (nonatomic, getter=isSkippable) BOOL skippable;

- (void).cxx_destruct;
- (id)description;
- (id)_typeDescription;
- (id)initWithType:(unsigned long long)a0 start:(double)a1 duration:(double)a2;

@end
