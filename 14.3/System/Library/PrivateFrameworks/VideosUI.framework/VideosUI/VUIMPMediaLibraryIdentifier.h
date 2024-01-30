@class NSString;

@interface VUIMPMediaLibraryIdentifier : NSObject <VUIMediaLibraryIdentifier>

@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
