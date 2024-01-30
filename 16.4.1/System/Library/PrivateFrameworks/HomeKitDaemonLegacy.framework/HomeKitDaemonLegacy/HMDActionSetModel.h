@class NSString, NSDate;

@interface HMDActionSetModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSDate *lastExecutionDate;

+ (id)properties;

@end
