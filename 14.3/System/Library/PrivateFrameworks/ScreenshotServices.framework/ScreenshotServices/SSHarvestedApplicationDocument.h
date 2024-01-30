@class NSData, NSString;

@interface SSHarvestedApplicationDocument : NSObject <BSXPCCoding, SSLoggable>

@property (copy, nonatomic) NSData *PDFData;
@property (nonatomic) long long PDFPage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } PDFVisibleRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *loggableDescription;

- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)a0;

@end
