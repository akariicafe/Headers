@class NSString;
@protocol ICItemIdentifier;

@interface ICTagAllTagsItemIdentifier : NSObject <ICItemIdentifier>

@property (class, readonly, nonatomic) ICTagAllTagsItemIdentifier *sharedItemIdentifier;
@property (class, readonly, copy, nonatomic) NSString *displayText;
@property (class, readonly, copy, nonatomic) NSString *archiveIdentifier;

@property (readonly, nonatomic) id<ICItemIdentifier> parentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
