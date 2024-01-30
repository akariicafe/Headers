@class NSString;

@interface _NSKVOCompatibility : NSObject <_NSKVOCompatibilityShim>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_noteProcessHasUsedKVOSwiftOverlay;
+ (void)_setRequiresSilencingExceptions:(BOOL)a0;
+ (BOOL)_releasesObservationBlockOnInvalidation;


@end
