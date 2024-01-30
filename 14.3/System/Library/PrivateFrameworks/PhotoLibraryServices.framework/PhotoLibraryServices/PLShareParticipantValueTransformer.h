@class NSArray;

@interface PLShareParticipantValueTransformer : NSSecureUnarchiveFromDataTransformer

@property (class, readonly, copy) NSArray *allowedTopLevelClasses;

@end
