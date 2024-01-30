@class NSString;

@interface _WKTextManipulationExclusionRule : NSObject {
    struct RetainPtr<NSString> { void *m_ptr; } _elementName;
    struct RetainPtr<NSString> { void *m_ptr; } _attributeName;
    struct RetainPtr<NSString> { void *m_ptr; } _attributeValue;
    struct RetainPtr<NSString> { void *m_ptr; } _className;
}

@property (readonly, nonatomic) BOOL isExclusion;
@property (readonly, nonatomic) NSString *elementName;
@property (readonly, nonatomic) NSString *attributeName;
@property (readonly, nonatomic) NSString *attributeValue;
@property (readonly, nonatomic) NSString *className;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initExclusion:(BOOL)a0 forAttribute:(id)a1 value:(id)a2;
- (id)initExclusion:(BOOL)a0 forClass:(id)a1;
- (id)initExclusion:(BOOL)a0 forElement:(id)a1;

@end
