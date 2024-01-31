@class NSString, NSArray;

@interface CLSArchivedHandout : CLSAbstractHandout <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *attachments;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

@end
