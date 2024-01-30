@class BAGResourceOptions, NSData, NSString;

@interface BAGFile : NSObject <NSSecureCoding, BAGResource>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) BAGResourceOptions *options;
@property (retain, nonatomic) NSData *resource;
@property (retain, nonatomic) NSString *contentType;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 contentType:(id)a1 options:(id)a2;

@end
