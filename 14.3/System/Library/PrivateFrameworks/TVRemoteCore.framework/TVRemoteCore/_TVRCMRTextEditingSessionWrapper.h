@class NSString, _TVRCMRTextEditingAttributesWrapper;

@interface _TVRCMRTextEditingSessionWrapper : NSObject {
    void *_session;
}

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) _TVRCMRTextEditingAttributesWrapper *attributes;

- (id)initWithSession:(void *)a0;
- (void)dealloc;

@end
