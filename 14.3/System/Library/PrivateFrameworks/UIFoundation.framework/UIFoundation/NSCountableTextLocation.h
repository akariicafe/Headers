@class NSString;

@interface NSCountableTextLocation : NSObject <NSTextLocationPrivate>

@property (class, readonly) NSCountableTextLocation *endOfDocumentLocation;

@property (readonly) unsigned long long characterIndex;
@property (readonly, getter=isEndOfDocument) BOOL endOfDocument;
@property (readonly, copy) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqualToTextLocation:(id)a0;
- (id)shortDescription;
- (long long)compare:(id)a0;
- (id)initWithIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;

@end
