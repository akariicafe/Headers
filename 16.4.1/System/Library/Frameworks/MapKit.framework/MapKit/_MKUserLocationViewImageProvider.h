@class CNContactStore, _MKUserLocationView, CNMonogrammer, NSObject;
@protocol OS_dispatch_queue;

@interface _MKUserLocationViewImageProvider : NSObject {
    _MKUserLocationView *_view;
    NSObject<OS_dispatch_queue> *_queue;
    CNContactStore *_contactStore;
    CNMonogrammer *_monogrammer;
}

- (void)_updateContactImage;
- (id)initWithUserLocationView:(id)a0;
- (void)_updateImage;
- (void)_contactsChanged:(id)a0;
- (void)_updateDefaultImage;
- (id)_monogrammer;
- (id)init;
- (void).cxx_destruct;

@end
