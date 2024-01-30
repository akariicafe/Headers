@interface WebCoreSharedBufferData : NSData {
    struct RefPtr<const WebCore::SharedBuffer::DataSegment, WTF::DumbPtrTraits<const WebCore::SharedBuffer::DataSegment> > { struct DataSegment *m_ptr; } _dataSegment;
    unsigned long long _position;
}

+ (void)initialize;

- (const void *)bytes;
- (unsigned long long)length;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithDataSegment:(const struct DataSegment { struct atomic<unsigned int> { struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int> > { _Atomic unsigned int x0; } x0; } x0; struct Variant<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>, WTF::RetainPtr<const __CFData *>, WTF::FileSystemImpl::MappedFileData> { union __variant_data<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>, WTF::RetainPtr<const __CFData *>, WTF::FileSystemImpl::MappedFileData> { union __variant_data<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> > { struct __storage_wrapper<WTF::Vector<char, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> > { struct type { unsigned char x0[16]; } x0; } x0; struct __dummy_type { } x1; } x0; union __variant_data<WTF::RetainPtr<const __CFData *>, WTF::FileSystemImpl::MappedFileData> { union __variant_data<WTF::RetainPtr<const __CFData *> > { struct __storage_wrapper<WTF::RetainPtr<const __CFData *> > { struct type { unsigned char x0[8]; } x0; } x0; struct __dummy_type { } x1; } x0; union __variant_data<WTF::FileSystemImpl::MappedFileData> { struct __storage_wrapper<WTF::FileSystemImpl::MappedFileData> { struct type { unsigned char x0[16]; } x0; } x0; struct __dummy_type { } x1; } x1; } x1; } x0; char x1; } x1; } *)a0 position:(unsigned long long)a1;

@end
