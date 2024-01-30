@class NSString, NSDictionary, NSURL, NSNumber;

@interface _WKLinkIconParameters : NSObject {
    struct RetainPtr<NSURL> { void *m_ptr; } _url;
    long long _iconType;
    struct RetainPtr<NSString> { void *m_ptr; } _mimeType;
    struct RetainPtr<NSNumber> { void *m_ptr; } _size;
    struct RetainPtr<NSMutableDictionary> { void *m_ptr; } _attributes;
}

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) long long iconType;
@property (readonly, copy, nonatomic) NSString *mimeType;
@property (readonly, copy, nonatomic) NSNumber *size;
@property (readonly, copy, nonatomic) NSDictionary *attributes;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithLinkIcon:(const void *)a0;

@end
