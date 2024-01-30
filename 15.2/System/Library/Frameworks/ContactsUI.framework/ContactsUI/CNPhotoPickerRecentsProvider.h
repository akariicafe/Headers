@class NSString, CNVisualIdentity;

@interface CNPhotoPickerRecentsProvider : NSObject <CNPhotoPickerProvider>

@property (readonly, nonatomic) CNVisualIdentity *visualIdentity;
@property (nonatomic) BOOL containsContactImage;
@property (nonatomic) BOOL containsMonogram;
@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

@end
