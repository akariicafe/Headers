@class NSFetchRequest;

@interface TBLocalFetchRequestDescriptor : NSObject

@property (retain, nonatomic) NSFetchRequest *localFetchRequest;
@property (readonly, nonatomic) NSFetchRequest *fetchRequest;

- (id)initWithFetchRequest:(id)a0;
- (void).cxx_destruct;

@end
