@interface WebArchiveResourceFromNSAttributedString : NSObject {
    struct RefPtr<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource> > { struct ArchiveResource *m_ptr; } resource;
}

- (id)URL;
- (id)MIMEType;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 URL:(id)a1 MIMEType:(id)a2 textEncodingName:(id)a3 frameName:(id)a4;
- (id).cxx_construct;

@end
