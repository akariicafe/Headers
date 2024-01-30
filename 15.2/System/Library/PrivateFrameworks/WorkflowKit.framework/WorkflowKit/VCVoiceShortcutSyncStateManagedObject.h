@class NSData, NSString, VCVoiceShortcutManagedObject;

@interface VCVoiceShortcutSyncStateManagedObject : NSManagedObject

@property (nonatomic) BOOL hasSynced;
@property (retain, nonatomic) NSData *metadata;
@property (copy, nonatomic) NSString *syncServiceIdentifier;
@property (retain, nonatomic) VCVoiceShortcutManagedObject *voiceShortcut;

+ (id)fetchRequest;

@end
