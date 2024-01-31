@interface AGXA10FamilyDepthStencilState : _MTLDepthStencilState {
    struct DepthStencilState { struct DepthStencilStateDescriptorGen1 { union { struct { unsigned char frontFaceStencilCompareFunction : 3; unsigned char frontFaceStencilFailOperation : 3; unsigned char frontFaceStencilPassDepthFailOperation : 3; unsigned char frontFaceStencilPassDepthPassOperation : 3; unsigned char frontFaceStencilEnabled : 1; unsigned char backFaceStencilCompareFunction : 3; unsigned char backFaceStencilFailOperation : 3; unsigned char backFaceStencilPassDepthFailOperation : 3; unsigned char backFaceStencilPassDepthPassOperation : 3; unsigned char backFaceStencilEnabled : 1; unsigned char depthCompareFunc : 3; unsigned char depthWriteEnabled : 1; unsigned char pad : 2; unsigned char frontface_stencil_read_mask; unsigned char frontface_stencil_write_mask; unsigned char backface_stencil_read_mask; unsigned char backface_stencil_write_mask; } ; unsigned long long dword; } ; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } label; unsigned short load_store_needs; unsigned short dss_info; } desc; struct DepthStencilISPBits { unsigned int ctl; unsigned int fa; unsigned int ba; } depthstencil_isp_bits; struct StencilISPBits { unsigned int fb; unsigned int bb; } stencil_isp_bits; } _impl;
}

@property (readonly) BOOL readsDepth;
@property (readonly) BOOL writesDepth;
@property (readonly) BOOL readsStencil;
@property (readonly) BOOL writesStencil;

- (id).cxx_construct;
- (void).cxx_destruct;

@end
