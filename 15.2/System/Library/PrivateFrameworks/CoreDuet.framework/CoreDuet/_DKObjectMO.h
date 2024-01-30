@class NSString, NSSet, _DKSourceMO, NSDate, NSNumber, _DKEventMO;

@interface _DKObjectMO : NSManagedObject

@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *localCreationDate;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSNumber *uuidHash;
@property (retain, nonatomic) _DKEventMO *event;
@property (retain, nonatomic) NSSet *relationObject;
@property (retain, nonatomic) NSSet *relationSubject;
@property (retain, nonatomic) _DKSourceMO *source;

+ (id)fetchRequest;

@end
