@interface WebCoreSharedBufferData : NSData {
    struct RefPtr<const WebCore::SharedBuffer::DataSegment, WTF::RawPtrTraits<const WebCore::SharedBuffer::DataSegment>, WTF::DefaultRefDerefTraits<const WebCore::SharedBuffer::DataSegment>> { struct DataSegment *m_ptr; } _dataSegment;
    unsigned long long _position;
    unsigned long long _size;
}

+ (void)initialize;

- (unsigned long long)length;
- (const void *)bytes;
- (void).cxx_destruct;
- (id)initWithDataSegment:(const void *)a0 position:(unsigned long long)a1 size:(unsigned long long)a2;
- (void)dealloc;
- (id).cxx_construct;

@end
