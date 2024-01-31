@interface AGXA10FamilySampler : _MTLSamplerState {
    struct Sampler { struct SamplerDescriptor { union _AGCSamplerPCFState { struct { unsigned char compareFunc : 4; unsigned char clampPCFEnabled : 1; unsigned char mipmapMinFilterEnabled : 1; unsigned char trilinearMinFilterEnabled : 1; unsigned char linearMinFilterEnabled : 1; unsigned char linearMagFilterEnabled : 1; unsigned char unused : 7; } ; unsigned short key; } ss; union { struct { unsigned char max_aniso : 5; unsigned char wrap_s : 3; unsigned char wrap_t : 3; unsigned char wrap_r : 3; unsigned char normalized : 1; unsigned char lod_average : 1; unsigned char min_filter : 2; unsigned char mag_filter : 2; unsigned char supports_ab : 1; unsigned char border_color : 2; unsigned char border_color_clamp_to_half : 1; unsigned char seamed_cube : 1; unsigned char reduction_mode : 2; unsigned char unused : 5; } ; unsigned int packed_state; } ; float lod_min_clamp; float lod_max_clamp; unsigned int custom_border_color[4]; unsigned long long pixel_format_for_custom_border_color; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } label; } desc; struct SamplerStateFields { unsigned long long field[1]; } encoded_state; struct SamplerBorderColorFields { } encoded_border_color; struct Allocation { } sampler_heap_allocation; } _impl;
}

- (unsigned long long)resourceIndex;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)uniqueIdentifier;
- (id)initWithDevice:(id)a0 samplerDescriptor:(id)a1 driverDescriptor:(void *)a2 initialQOSOverride:(unsigned int)a3;

@end
