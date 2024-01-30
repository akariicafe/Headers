@class NSArray;

@interface SKUITabularLockupLayout : NSObject

@property (readonly, nonatomic) NSArray *columns;

+ (id)fontForLabelViewElement:(id)a0 context:(id)a1;

- (void).cxx_destruct;
- (id)initWithLockup:(id)a0 context:(id)a1;
- (void)sizeColumnsToFitWidth:(double)a0 context:(id)a1;

@end
