@class NSString, NSSet, NSDate;

@interface CRFDRRCHL : NSObject

@property (retain, nonatomic) NSString *repairDateStr;
@property (retain, nonatomic) NSDate *repairDate;
@property (retain, nonatomic) NSString *repairCenter;
@property (retain, nonatomic) NSSet *dataClasses;
@property (retain, nonatomic) NSSet *properties;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithrepairDateStr:(id)a0 repairDate:(id)a1 repairCenter:(id)a2 dataClasses:(id)a3 properties:(id)a4;

@end
