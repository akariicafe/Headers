@class NSString, NSData, CNDuplicateSet;

@interface CNDuplicateSetContactImage : NSManagedObject

@property (nonatomic, copy) NSString *cropRectString;
@property (nonatomic, copy) NSData *fullscreenImageData;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic, copy) NSData *imageHash;
@property (nonatomic, copy) NSString *imageType;
@property (nonatomic, copy) NSData *memojiMetadata;
@property (nonatomic, copy) NSData *thumbnailImageData;
@property (nonatomic, retain) CNDuplicateSet *duplicateSet;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
