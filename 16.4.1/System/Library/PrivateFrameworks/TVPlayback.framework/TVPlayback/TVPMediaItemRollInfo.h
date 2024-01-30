@class NSNumber, NSString;

@interface TVPMediaItemRollInfo : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) double start;
@property (readonly, nonatomic) double duration;
@property (retain, nonatomic) NSNumber *adamID;
@property (nonatomic, getter=isSkippable) BOOL skippable;
@property (retain, nonatomic) NSString *dynamicSlotDataSetId;

- (id)description;
- (id)_typeDescription;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 start:(double)a1 duration:(double)a2;

@end
