@class CNContactStore, CNContact, NSURL, NSObject;
@protocol OS_os_log;

@interface CNDraggingContact : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *os_log;

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSURL *cachedFileURLRepresentation;

+ (id)availableDataRepresentationTypes;

- (id)fileNameForContact:(id)a0;
- (id)dataRepresentationForType:(id)a0;
- (id)fetchContactWithKeys:(id)a0;
- (id)initWithContact:(id)a0 contactStore:(id)a1;
- (void).cxx_destruct;
- (id)serializeContactToVCard:(id)a0;
- (id)fileURLRepresentation;
- (void)cleanupFileURLRepresentation;

@end
