@class CNContactStore, _MKUserLocationView, CNMonogrammer, NSObject;
@protocol OS_dispatch_queue;

@interface _MKUserLocationViewImageProvider : NSObject {
    _MKUserLocationView *_view;
    NSObject<OS_dispatch_queue> *_queue;
    CNContactStore *_contactStore;
    CNMonogrammer *_monogrammer;
}

- (void)_updateDefaultImage;
- (id)initWithUserLocationView:(id)a0;
- (void)_updateContactImage;
- (void).cxx_destruct;
- (id)init;
- (id)_monogrammer;
- (void)_contactsChanged:(id)a0;
- (void)_updateImage;

@end
