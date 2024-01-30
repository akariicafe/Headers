@class NSURL;

@interface TLVibrationPersistenceUtilities : NSObject

@property (class, readonly) NSURL *userGeneratedVibrationStoreFileURL;

+ (BOOL)_objectIsValidUserGeneratedVibrationPattern:(id)a0 error:(id *)a1;
+ (BOOL)_validateObjectWithError:(id *)a0 validationBlock:(id /* block */)a1;
+ (BOOL)objectIsValidUserGeneratedVibrationPatternsDictionary:(id)a0 error:(id *)a1;

@end
