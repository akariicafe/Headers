@class NSPersonNameComponents, NSString, NSSet, NSUUID, NSDate, CURangingMeasurement, NSNumber;

@interface SFAirDropNode : NSObject {
    struct __SFOperation { } *_sender;
    NSPersonNameComponents *_nameComponents;
}

@property (readonly) NSDate *discoveryDate;
@property (retain) id node;
@property (retain) NSString *contactIdentifier;
@property (retain) NSString *realName;
@property (retain) struct CGImage { } *displayIcon;
@property (retain) NSString *displayName;
@property (retain) NSString *secondaryName;
@property (retain) NSString *model;
@property (retain) NSString *transportBundleID;
@property (retain) NSSet *formattedHandles;
@property (retain) NSSet *actualHandles;
@property (retain) NSUUID *nodeIdentifier;
@property (retain, nonatomic) CURangingMeasurement *rangingMeasurement;
@property (retain) NSNumber *suggestionIndex;
@property (retain, nonatomic) NSSet *contactIDs;
@property (copy, nonatomic) NSString *derivedIntentIdentifier;
@property (getter=isDisabled) BOOL disabled;
@property (getter=isMe) BOOL me;
@property (readonly, getter=isKnown) BOOL known;
@property (getter=isUnknown) BOOL unknown;
@property (getter=isMonogram) BOOL monogram;
@property (getter=isClassroom) BOOL classroom;
@property (getter=isclassroomGroup) BOOL classroomGroup;
@property (getter=isClassroomCourse) BOOL classroomCourse;
@property (getter=isSuggestion) BOOL suggestion;
@property (getter=isRapport) BOOL rapport;
@property (getter=isUltraWideBindCapable) BOOL ultraWideBindCapable;
@property long long selectionReason;
@property (readonly) BOOL supportsCredentials;
@property (readonly) BOOL supportsFMF;
@property (readonly) BOOL supportsPasses;
@property (readonly) BOOL supportsMixedTypes;

+ (id)nodeWithSFNode:(struct __SFNode { } *)a0;

- (void)updateWithSFNode:(struct __SFNode { } *)a0;
- (void)cancelSend;
- (void)updateDisplayName;
- (void)appendDiscoveryInfoToDisplayName:(id)a0;
- (id)displayNameForLocale:(id)a0;
- (void)startSendForBundleID:(id)a0 sessionID:(id)a1 items:(id)a2 description:(id)a3 previewImage:(struct CGImage { } *)a4 fromShareSheet:(BOOL)a5;
- (void)handleOperationCallback:(struct __SFOperation { } *)a0 event:(long long)a1 withResults:(id)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;

@end
