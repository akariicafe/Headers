@class NSString, ENLinkedNotebookRef;

@interface ENNoteRef : NSObject <WFSerializableContent, NSCoding, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *guid;
@property (retain, nonatomic) ENLinkedNotebookRef *linkedNotebook;

+ (id)objectWithWFSerializedRepresentation:(id)a0;
+ (id)noteRefFromData:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asData;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)wfSerializedRepresentation;

@end
