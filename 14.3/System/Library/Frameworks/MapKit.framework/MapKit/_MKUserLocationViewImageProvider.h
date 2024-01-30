@class CNContactStore, _MKUserLocationView, CNMonogrammer, NSObject;
@protocol OS_dispatch_queue;

@interface _MKUserLocationViewImageProvider : NSObject {
    _MKUserLocationView *_view;
    NSObject<OS_dispatch_queue> *_queue;
    CNContactStore *_contactStore;
    CNMonogrammer *_monogrammer;
}

- (id)init;
- (void).cxx_destruct;
- (void)_contactsChanged:(id)a0;
- (void)_updateImage;
- (id)_monogrammer;
- (id)initWithUserLocationView:(id)a0;
- (void)_updateContactImage;
- (void)_updateDefaultImage;

@end
