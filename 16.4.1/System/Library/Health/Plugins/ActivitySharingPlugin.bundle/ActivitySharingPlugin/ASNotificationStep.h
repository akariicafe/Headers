@class NSSet;

@interface ASNotificationStep : NSObject

@property (retain, nonatomic) NSSet *recordTypes;
@property (copy, nonatomic) id /* block */ objectsTransformationBlock;
@property (copy, nonatomic) id /* block */ objectTransformationBlock;
@property (copy, nonatomic) id /* block */ shouldNotifyObserverBlock;
@property (copy, nonatomic) id /* block */ notifyObserverBlock;

- (id)objectsTransformedFromRecords:(id)a0 cloudKitManager:(id)a1;
- (void).cxx_destruct;

@end
