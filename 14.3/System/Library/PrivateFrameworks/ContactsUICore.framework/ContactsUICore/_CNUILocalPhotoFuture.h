@interface _CNUILocalPhotoFuture : NSObject

+ (id)extensions;
+ (id)photoForEmailAddresses:(id)a0;
+ (id)photoForEmailAddresses:(id)a0 dataProxy:(id)a1;
+ (id)photoForEmailAddress:(id)a0 dataProxy:(id)a1;
+ (id)photoForEmailAddress:(id)a0;
+ (id)photoURLsForEmailAddresses:(id)a0 inFolders:(id)a1;
+ (id)firstPhotoAvailableAtURLs:(id)a0 dataProxy:(id)a1;
+ (id)photoAtURL:(id)a0 fallbackURLs:(id)a1 dataProxy:(id)a2;

@end
