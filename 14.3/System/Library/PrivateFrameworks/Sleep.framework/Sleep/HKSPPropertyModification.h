@class NSString;

@interface HKSPPropertyModification : NSObject

@property (readonly, nonatomic) NSString *propertyName;
@property (readonly, nonatomic) BOOL modified;
@property (readonly, copy, nonatomic) id /* block */ performBlock;

+ (id)modificationWithPropertyName:(id)a0 modified:(BOOL)a1 performBlock:(id /* block */)a2;

- (void).cxx_destruct;

@end
