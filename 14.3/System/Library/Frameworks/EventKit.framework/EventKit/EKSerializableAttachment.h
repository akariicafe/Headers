@class NSURL, NSString;

@interface EKSerializableAttachment : EKSerializableObject

@property (retain, nonatomic) NSURL *urlOnDisk;
@property (retain, nonatomic) NSString *contentTypeFromServer;

+ (id)classesForKey;

- (void).cxx_destruct;
- (id)initWithAttachment:(id)a0;
- (id)createAttachment;

@end
