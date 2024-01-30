@class NSString, ICAttachment;
@protocol ICSearchIndexable;

@interface ICAttachmentLocation : ICLocation <ICSearchIndexableTarget>

@property (readonly, nonatomic) id<ICSearchIndexable> targetSearchIndexable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL placeUpdated;
@property (retain, nonatomic) ICAttachment *attachment;
@property (readonly, nonatomic) NSString *formattedAddressWithoutAttachmentTitle;

+ (id)newAttachmentLocationForAttachment:(id)a0;


@end
