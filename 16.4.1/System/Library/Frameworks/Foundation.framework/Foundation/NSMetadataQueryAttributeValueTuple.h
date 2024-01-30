@class NSString;

@interface NSMetadataQueryAttributeValueTuple : NSObject {
    id _attr;
    id _value;
    unsigned long long _count;
    void *_reserved;
}

@property (readonly, copy) NSString *attribute;
@property (readonly, retain) id value;
@property (readonly) unsigned long long count;

- (void)dealloc;
- (id)_init:(id)a0 attribute:(id)a1 value:(id)a2 count:(unsigned long long)a3;

@end
