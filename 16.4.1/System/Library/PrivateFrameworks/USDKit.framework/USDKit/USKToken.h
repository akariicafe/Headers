@interface USKToken : NSObject {
    struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep *_ptrAndBits; } _rep; } _token;
}

+ (id)dataTypeWithTfToken:(struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep *x0; } x0; })a0;
+ (id)nodeTypeWithTfToken:(struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep *x0; } x0; })a0;
+ (id)roleTypeWithTfToken:(struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep *x0; } x0; })a0;
+ (id)schemaTypeWithTfToken:(struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep *x0; } x0; })a0;
+ (id)tokenWithDataType:(id)a0;
+ (id)tokenWithNodeType:(id)a0;
+ (id)tokenWithRoleType:(id)a0;
+ (id)tokenWithSchemaType:(id)a0;

- (id)stringValue;
- (struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep *x0; } x0; })token;
- (id).cxx_construct;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTfToken:(struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep *x0; } x0; })a0;

@end
