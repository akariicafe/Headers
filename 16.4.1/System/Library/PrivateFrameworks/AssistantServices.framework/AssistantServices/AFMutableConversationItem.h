@class NSUUID, AceObject, NSString, AFDialogPhase, AFDataStore;

@interface AFMutableConversationItem : NSObject <AFConversationStorable, NSCopying>

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSUUID *revisionIdentifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) AceObject *aceObject;
@property (retain, nonatomic) AFDialogPhase *dialogPhase;
@property (copy, nonatomic) NSString *aceCommandIdentifier;
@property (nonatomic) long long presentationState;
@property (nonatomic, getter=isVirgin) BOOL virgin;
@property (nonatomic, getter=isTransient) BOOL transient;
@property (nonatomic, getter=isSupplemental) BOOL supplemental;
@property (nonatomic, getter=isImmersiveExperience) BOOL immersiveExperience;
@property (readonly, nonatomic) AFDataStore *associatedDataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPropertyListRepresentation:(id)a0;
- (id)propertyListRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)_didMutate;
- (long long)_presentationStateForPropertyListString:(id)a0;
- (id)_propertyListStringForPresentationState;
- (id)_propertyListStringForType;
- (BOOL)_shouldRedactSpeakableText;
- (long long)_typeForPropertyListString:(id)a0;
- (id)initWithIdentifier:(id)a0 revisionIdentifier:(id)a1 type:(long long)a2 aceObject:(id)a3 dialogPhase:(id)a4 presentationState:(long long)a5 aceCommandIdentifier:(id)a6 virgin:(BOOL)a7 transient:(BOOL)a8 supplemental:(BOOL)a9 immersiveExperience:(BOOL)a10 associatedDataStore:(id)a11;
- (id)initWithIdentifier:(id)a0 type:(long long)a1 aceObject:(id)a2 dialogPhase:(id)a3 presentationState:(long long)a4 aceCommandIdentifier:(id)a5 virgin:(BOOL)a6 transient:(BOOL)a7 supplemental:(BOOL)a8 immersiveExperience:(BOOL)a9 associatedDataStore:(id)a10;
- (id)initWithType:(long long)a0 aceObject:(id)a1 dialogPhase:(id)a2 presentationState:(long long)a3 aceCommandIdentifier:(id)a4 virgin:(BOOL)a5 transient:(BOOL)a6 supplemental:(BOOL)a7 immersiveExperience:(BOOL)a8 associatedDataStore:(id)a9;

@end
