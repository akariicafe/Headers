@class UIImage, NSString;

@interface PXSharedLibraryParticipantTableCellModel : PXObservable

@property (class, readonly) double imageDiameter;
@property (class, readonly) double imageVerticalInset;
@property (class, readonly) double imageInset;

@property (readonly, copy, nonatomic) UIImage *image;
@property (readonly, nonatomic) long long requestID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *address;
@property (readonly, nonatomic) BOOL removeButtonVisible;
@property (readonly, nonatomic) BOOL ellipsisButtonAllowed;

- (void)setRequestID:(long long)a0;
- (void)setAddress:(id)a0;
- (void)setImage:(id)a0;
- (id)init;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (void)configureForParticipant:(id)a0 displayScale:(double)a1 isRTL:(BOOL)a2;
- (void)setEllipsisButtonAllowed:(BOOL)a0;

@end
