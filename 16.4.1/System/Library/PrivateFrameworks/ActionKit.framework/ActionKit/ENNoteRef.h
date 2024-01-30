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

- (id)asData;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)wfSerializedRepresentation;
- (void).cxx_destruct;

@end
