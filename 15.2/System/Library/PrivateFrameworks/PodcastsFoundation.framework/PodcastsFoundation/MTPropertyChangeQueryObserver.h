@class NSArray;

@interface MTPropertyChangeQueryObserver : MTAllPropertyChangesQueryObserver

@property (retain, nonatomic) NSArray *propertyKeys;

+ (Class)fetchedResultsControllerClass;

- (id)_frc;

@end
