@class NSArray, NSManagedObject;
@protocol PLValidatedManagedObject;

@interface PLManagedObjectValidationResult : NSObject

@property (nonatomic) BOOL status;
@property (retain, nonatomic) NSManagedObject<PLValidatedManagedObject> *validatedObject;
@property (retain, nonatomic) NSArray *errorMessages;
@property (retain, nonatomic) NSArray *infoMessages;

- (void).cxx_destruct;

@end
