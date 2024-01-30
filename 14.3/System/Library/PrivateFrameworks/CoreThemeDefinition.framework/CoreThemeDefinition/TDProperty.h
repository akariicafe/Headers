@class NSString;

@interface TDProperty : NSManagedObject {
    NSString *_name;
}

@property (copy, nonatomic) NSString *name;

- (void)dealloc;
- (void)addToDictionary:(id)a0;

@end
