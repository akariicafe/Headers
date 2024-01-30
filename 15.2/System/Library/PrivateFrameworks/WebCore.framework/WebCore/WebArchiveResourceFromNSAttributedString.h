@interface WebArchiveResourceFromNSAttributedString : NSObject {
    struct RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>> { struct ArchiveResource *m_ptr; } resource;
}

- (id)MIMEType;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 URL:(id)a1 MIMEType:(id)a2 textEncodingName:(id)a3 frameName:(id)a4;
- (id)URL;
- (id).cxx_construct;

@end
