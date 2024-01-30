@class NSString, NSUUID, NSURL, NSDate, NSSet;

@interface _CDAttachmentRecord : NSManagedObject

@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *uti;
@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSUUID *cloudIdentifier;
@property (retain, nonatomic) NSString *photoLocalIdentifier;
@property (nonatomic) long long sizeInBytes;
@property (retain, nonatomic) NSURL *contentURL;
@property (retain, nonatomic) NSString *contentText;
@property (retain, nonatomic) NSString *personInPhoto;
@property (retain, nonatomic) NSString *photoSceneDescriptor;
@property (retain, nonatomic) NSSet *interactions;

@end
